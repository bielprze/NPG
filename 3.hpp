/* 
 * File:   MainWindow.hpp
 * Author: imam
 *
 * Created on 25 September 2015, 7:52 PM
 */

#ifndef MAINWINDOW_HPP
#define	MAINWINDOW_HPP

// Gtkmm includes
#include <gtkmm/window.h>
#include <gtkmm/frame.h>

#include "VideoArea.hpp"

class MainWindow : public Gtk::Window
{
    protected:
        Gtk::Frame video_frame;
        VideoArea video_area;
        
    public:
        MainWindow ();
        virtual ~MainWindow();
};

#endif	/* MAINWINDOW_HPP */

