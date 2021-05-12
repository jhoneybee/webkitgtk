#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);
    GtkWidget *main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(main_window), 800, 600);
    WebKitWebView *webView = WEBKIT_WEB_VIEW(webkit_web_view_new());
    gtk_container_add(GTK_CONTAINER(main_window), GTK_WIDGET(webView));
    webkit_web_view_load_uri(webView, "http://119.28.8.37:5000/");
    gtk_widget_grab_focus(GTK_WIDGET(webView));
    gtk_widget_show_all(main_window);
    gtk_main();
    return 0;
}