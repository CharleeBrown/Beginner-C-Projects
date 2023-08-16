#include <gtk/gtk.h>

static void hey(GtkWidget *widget, gpointer data){
	g_print("hello \n");
}

static void activate(GtkApplication *app, gpointer user_data){
	GtkWidget *window;
	GtkWidget *button;

	window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window), "The Window");
	gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

	button = gtk_button_new_with_label ("Hey");
	g_signal_connect (button, "clicked", G_CALLBACK (hey), NULL);
	gtk_window_set_child (GTK_WINDOW (window), button);
	gtk_window_present (GTK_WINDOW (window));
}


int main(int agrc, char **agrv){
	GtkApplication *app;
	int status;
	app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
	g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
	status = g_application_run (G_APPLICATION (app), agrc, agrv);
	g_object_unref(app);

	return status;
}

