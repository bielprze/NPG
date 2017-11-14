//Master - komentarz dodany z branch master
#include "VideoArea.hpp"

#include <gdkmm/pixbuf.h>
#include <gdkmm/general.h>
#include <glibmm/main.h>

VideoArea::VideoArea() : cv_opened(false)
{
    cv_cap.open(0);
    
    if (cv_cap.isOpened() == true) {
        cv_opened = true;
        Glib::signal_timeout().connect(sigc::mem_fun(*this, &VideoArea::on_timeout), 50);
    }
    
}

VideoArea::~VideoArea()
{
    
}

bool VideoArea::on_timeout()
{
    Glib::RefPtr<Gdk::Window> win = get_window();
    if (win)
    {
        Gdk::Rectangle r(0, 0, get_allocation().get_width(), get_allocation().get_height());
        win->invalidate_rect(r, false);
    }
    return true;
}

bool VideoArea::on_draw(const Cairo::RefPtr<Cairo::Context> &cr)
{
    if (!cv_opened) return false;
    
    cv::Mat cv_frame, cv_frame1;

    cv_cap.read(cv_frame);
    
    if (cv_frame.empty()) return false;
    
    cv::cvtColor (cv_frame, cv_frame1, CV_BGR2RGB);
        
    Gdk::Cairo::set_source_pixbuf (cr, Gdk::Pixbuf::create_from_data(cv_frame1.data, Gdk::COLORSPACE_RGB, false, 8, cv_frame1.cols, cv_frame1.rows, cv_frame1.step));
    
    cr->paint();
        
    return true;
}
