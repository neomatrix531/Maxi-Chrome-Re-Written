#include <QApplication>
#include <QWebEngineView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWebEngineView view;

    // Set initial URL; you can change this to anything you like
    view.setUrl(QUrl("https://www.example.com"));
    view.resize(1024, 768);
    view.setWindowTitle("Minimal C++ Browser (QtWebEngine)");
    view.show();

    return app.exec();
}
