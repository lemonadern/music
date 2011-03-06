/* ScrollingLabel.c generated by valac 0.11.6, the Vala compiler
 * generated from ScrollingLabel.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL (elementary_widgets_scrolling_label_get_type ())
#define ELEMENTARY_WIDGETS_SCROLLING_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL, ElementaryWidgetsScrollingLabel))
#define ELEMENTARY_WIDGETS_SCROLLING_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL, ElementaryWidgetsScrollingLabelClass))
#define ELEMENTARY_WIDGETS_IS_SCROLLING_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL))
#define ELEMENTARY_WIDGETS_IS_SCROLLING_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL))
#define ELEMENTARY_WIDGETS_SCROLLING_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL, ElementaryWidgetsScrollingLabelClass))

typedef struct _ElementaryWidgetsScrollingLabel ElementaryWidgetsScrollingLabel;
typedef struct _ElementaryWidgetsScrollingLabelClass ElementaryWidgetsScrollingLabelClass;
typedef struct _ElementaryWidgetsScrollingLabelPrivate ElementaryWidgetsScrollingLabelPrivate;

struct _ElementaryWidgetsScrollingLabel {
	GtkLabel parent_instance;
	ElementaryWidgetsScrollingLabelPrivate * priv;
};

struct _ElementaryWidgetsScrollingLabelClass {
	GtkLabelClass parent_class;
};


static gpointer elementary_widgets_scrolling_label_parent_class = NULL;

GType elementary_widgets_scrolling_label_get_type (void) G_GNUC_CONST;
enum  {
	ELEMENTARY_WIDGETS_SCROLLING_LABEL_DUMMY_PROPERTY
};
ElementaryWidgetsScrollingLabel* elementary_widgets_scrolling_label_new (void);
ElementaryWidgetsScrollingLabel* elementary_widgets_scrolling_label_construct (GType object_type);


ElementaryWidgetsScrollingLabel* elementary_widgets_scrolling_label_construct (GType object_type) {
	ElementaryWidgetsScrollingLabel * self = NULL;
	self = (ElementaryWidgetsScrollingLabel*) g_object_new (object_type, NULL);
	return self;
}


ElementaryWidgetsScrollingLabel* elementary_widgets_scrolling_label_new (void) {
	return elementary_widgets_scrolling_label_construct (ELEMENTARY_WIDGETS_TYPE_SCROLLING_LABEL);
}


static void elementary_widgets_scrolling_label_class_init (ElementaryWidgetsScrollingLabelClass * klass) {
	elementary_widgets_scrolling_label_parent_class = g_type_class_peek_parent (klass);
}


static void elementary_widgets_scrolling_label_instance_init (ElementaryWidgetsScrollingLabel * self) {
}


GType elementary_widgets_scrolling_label_get_type (void) {
	static volatile gsize elementary_widgets_scrolling_label_type_id__volatile = 0;
	if (g_once_init_enter (&elementary_widgets_scrolling_label_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ElementaryWidgetsScrollingLabelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) elementary_widgets_scrolling_label_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ElementaryWidgetsScrollingLabel), 0, (GInstanceInitFunc) elementary_widgets_scrolling_label_instance_init, NULL };
		GType elementary_widgets_scrolling_label_type_id;
		elementary_widgets_scrolling_label_type_id = g_type_register_static (GTK_TYPE_LABEL, "ElementaryWidgetsScrollingLabel", &g_define_type_info, 0);
		g_once_init_leave (&elementary_widgets_scrolling_label_type_id__volatile, elementary_widgets_scrolling_label_type_id);
	}
	return elementary_widgets_scrolling_label_type_id__volatile;
}



