
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
    
<<<<<<< HEAD
    app->run (mwindow); //razdwa
=======
    app->run (mwindow); //drugikomentarz
>>>>>>> 527c892bd814866131cc8addd8a39906aebb7bf8
    
    //video_thread.join ();
    
    return 0;
}

