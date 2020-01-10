/* testtreemultimap.c generated by valac 0.19.0.4-d6d4, the Vala compiler
 * generated from testtreemultimap.vala, do not modify */

/* testtreemultimap.vala
 *
 * Copyright (C) 2008  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois, Julien Peeters
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_MULTI_MAP_TESTS (multi_map_tests_get_type ())
#define MULTI_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MULTI_MAP_TESTS, MultiMapTests))
#define MULTI_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MULTI_MAP_TESTS, MultiMapTestsClass))
#define IS_MULTI_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MULTI_MAP_TESTS))
#define IS_MULTI_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MULTI_MAP_TESTS))
#define MULTI_MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MULTI_MAP_TESTS, MultiMapTestsClass))

typedef struct _MultiMapTests MultiMapTests;
typedef struct _MultiMapTestsClass MultiMapTestsClass;
typedef struct _MultiMapTestsPrivate MultiMapTestsPrivate;

#define TYPE_TREE_MULTI_MAP_TESTS (tree_multi_map_tests_get_type ())
#define TREE_MULTI_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TREE_MULTI_MAP_TESTS, TreeMultiMapTests))
#define TREE_MULTI_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TREE_MULTI_MAP_TESTS, TreeMultiMapTestsClass))
#define IS_TREE_MULTI_MAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TREE_MULTI_MAP_TESTS))
#define IS_TREE_MULTI_MAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TREE_MULTI_MAP_TESTS))
#define TREE_MULTI_MAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TREE_MULTI_MAP_TESTS, TreeMultiMapTestsClass))

typedef struct _TreeMultiMapTests TreeMultiMapTests;
typedef struct _TreeMultiMapTestsClass TreeMultiMapTestsClass;
typedef struct _TreeMultiMapTestsPrivate TreeMultiMapTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _MultiMapTests {
	GeeTestCase parent_instance;
	MultiMapTestsPrivate * priv;
	GeeMultiMap* test_multi_map;
};

struct _MultiMapTestsClass {
	GeeTestCaseClass parent_class;
};

struct _TreeMultiMapTests {
	MultiMapTests parent_instance;
	TreeMultiMapTestsPrivate * priv;
};

struct _TreeMultiMapTestsClass {
	MultiMapTestsClass parent_class;
};

typedef void (*GeeTestCaseTestMethod) (void* user_data);

static gpointer tree_multi_map_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST;
GType multi_map_tests_get_type (void) G_GNUC_CONST;
GType tree_multi_map_tests_get_type (void) G_GNUC_CONST;
enum  {
	TREE_MULTI_MAP_TESTS_DUMMY_PROPERTY
};
TreeMultiMapTests* tree_multi_map_tests_new (void);
TreeMultiMapTests* tree_multi_map_tests_construct (GType object_type);
MultiMapTests* multi_map_tests_construct (GType object_type, const gchar* name);
void gee_test_case_add_test (GeeTestCase* self, const gchar* name, GeeTestCaseTestMethod test, void* test_target);
static void tree_multi_map_tests_test_selected_functions (TreeMultiMapTests* self);
static void _tree_multi_map_tests_test_selected_functions_gee_test_case_test_method (gpointer self);
static void tree_multi_map_tests_real_set_up (GeeTestCase* base);
static void tree_multi_map_tests_real_tear_down (GeeTestCase* base);


static void _tree_multi_map_tests_test_selected_functions_gee_test_case_test_method (gpointer self) {
	tree_multi_map_tests_test_selected_functions (self);
}


TreeMultiMapTests* tree_multi_map_tests_construct (GType object_type) {
	TreeMultiMapTests * self = NULL;
	self = (TreeMultiMapTests*) multi_map_tests_construct (object_type, "TreeMultiMap");
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeMultiMap] selected functions", _tree_multi_map_tests_test_selected_functions_gee_test_case_test_method, self);
	return self;
}


TreeMultiMapTests* tree_multi_map_tests_new (void) {
	return tree_multi_map_tests_construct (TYPE_TREE_MULTI_MAP_TESTS);
}


static void tree_multi_map_tests_real_set_up (GeeTestCase* base) {
	TreeMultiMapTests * self;
	GeeTreeMultiMap* _tmp0_;
	self = (TreeMultiMapTests*) base;
	_tmp0_ = gee_tree_multi_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL);
	_g_object_unref0 (((MultiMapTests*) self)->test_multi_map);
	((MultiMapTests*) self)->test_multi_map = (GeeMultiMap*) _tmp0_;
}


static void tree_multi_map_tests_real_tear_down (GeeTestCase* base) {
	TreeMultiMapTests * self;
	self = (TreeMultiMapTests*) base;
	_g_object_unref0 (((MultiMapTests*) self)->test_multi_map);
	((MultiMapTests*) self)->test_multi_map = NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void tree_multi_map_tests_test_selected_functions (TreeMultiMapTests* self) {
	GeeMultiMap* _tmp0_;
	GeeTreeMultiMap* _tmp1_;
	GeeTreeMultiMap* test_tree_multi_map;
	GCompareFunc _tmp2_;
	GCompareFunc _tmp3_;
	GCompareFunc _tmp4_;
	GCompareFunc _tmp5_;
	GCompareFunc _tmp6_;
	GCompareFunc _tmp7_;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((MultiMapTests*) self)->test_multi_map;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_TREE_MULTI_MAP) ? ((GeeTreeMultiMap*) _tmp0_) : NULL);
	test_tree_multi_map = _tmp1_;
	_vala_assert (test_tree_multi_map != NULL, "test_tree_multi_map != null");
	_tmp2_ = gee_tree_multi_map_get_key_compare_func (test_tree_multi_map);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strcmp0;
	_vala_assert (_tmp3_ == ((GCompareFunc) _tmp4_), "test_tree_multi_map.key_compare_func == (CompareFunc) strcmp");
	_tmp5_ = gee_tree_multi_map_get_value_compare_func (test_tree_multi_map);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_strcmp0;
	_vala_assert (_tmp6_ == ((GCompareFunc) _tmp7_), "test_tree_multi_map.value_compare_func == (CompareFunc) strcmp");
	_g_object_unref0 (test_tree_multi_map);
}


static void tree_multi_map_tests_class_init (TreeMultiMapTestsClass * klass) {
	tree_multi_map_tests_parent_class = g_type_class_peek_parent (klass);
	GEE_TEST_CASE_CLASS (klass)->set_up = tree_multi_map_tests_real_set_up;
	GEE_TEST_CASE_CLASS (klass)->tear_down = tree_multi_map_tests_real_tear_down;
}


static void tree_multi_map_tests_instance_init (TreeMultiMapTests * self) {
}


GType tree_multi_map_tests_get_type (void) {
	static volatile gsize tree_multi_map_tests_type_id__volatile = 0;
	if (g_once_init_enter (&tree_multi_map_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TreeMultiMapTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tree_multi_map_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TreeMultiMapTests), 0, (GInstanceInitFunc) tree_multi_map_tests_instance_init, NULL };
		GType tree_multi_map_tests_type_id;
		tree_multi_map_tests_type_id = g_type_register_static (TYPE_MULTI_MAP_TESTS, "TreeMultiMapTests", &g_define_type_info, 0);
		g_once_init_leave (&tree_multi_map_tests_type_id__volatile, tree_multi_map_tests_type_id);
	}
	return tree_multi_map_tests_type_id__volatile;
}



