#include <gtk/gtk.h>

int main(int argc, char** argv) {
	gtk_init (&argc, &argv);
	
	GtkWidget * window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);
	g_signal_connect (G_OBJECT (window), "destroy", G_CALLBACK (gtk_main_quit), NULL);
	GtkWidget * label = gtk_label_new("Hello, Autotools Sample !!!!");

	gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(label));

	gtk_widget_show_all(GTK_WIDGET(window));

	gtk_main();

	return 0;
}
