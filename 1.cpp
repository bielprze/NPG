
// GTKmm and User interface includes
<<<<<<< HEAD
#include "MainWindow.hpp"
##include <gtkmm/application.h>
=======
#include "MainWindow.hpp" //razdwatrzy
#include <gtkmm/application.h>
>>>>>>> 9b6964124cf8975643efc01e3ca2be3442cc2572

int main(int argc, char** argv)
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv);
    
    MainWindow mwindow;
    
    app->run (mwindow); //razdwa
    
    //video_thread.join ();
    
    return 0;
}

