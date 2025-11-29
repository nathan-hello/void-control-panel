#include <gtkmm/application.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>

class MainWindow : public Gtk::Window {
  Gtk::Button m_button;


public:
  MainWindow() {
    m_button = Gtk::Button("Asdf");
    m_button.set_margin(10);
    m_button.signal_clicked().connect(
        sigc::mem_fun(*this, &MainWindow::on_button_click));
    set_child(m_button);
  };

private:
  void on_button_click() {
    std::string current_label = m_button.get_label();
    if (current_label == "Asdf") {
    m_button.set_label("Fdsa"); 
    } else {
      m_button.set_label("Asdf");
    }
  };
};

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create("mywindow");
  return app->make_window_and_run<MainWindow>(argc, argv);
}
