#include "MainWindow.hpp" //Master - komentarz dodany z branch master

MainWindow::MainWindow()
{

    set_title ("OpenCV with GTK");

    set_border_width (10);

    video_frame.set_label ("OpenCV Video");

    video_frame.set_label_align (Gtk::ALIGN_CENTER, Gtk::ALIGN_CENTER);

    video_frame.set_shadow_type (Gtk::SHADOW_OUT);

    video_frame.set_size_request(640, 480);

    video_area.set_tooltip_text("Video");

    video_frame.add(video_area);

    add (video_frame);

    show_all();

}

MainWindow::~MainWindow()
{

}
