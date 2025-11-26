#include <gtkmm/application.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window {
  Gtk::Button m_button;


public:
  HelloWorld() {
    m_button = Gtk::Button("Asdf");
    m_button.set_margin(10);
    m_button.signal_clicked().connect(
        sigc::mem_fun(*this, &HelloWorld::on_button_click));
    set_child(m_button);
  };
  void Asdf() {}

private:
  void on_button_click() { m_button.set_label("Fdsa"); };
};

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create("mywindow");
  return app->make_window_and_run<HelloWorld>(argc, argv);
}
