/* deque.c generated by valac 0.19.0.4-d6d4, the Vala compiler
 * generated from deque.vala, do not modify */

/* deque.vala
 *
 * Copyright (C) 2009  Didier Villevalois
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include <glib.h>
#include <glib-object.h>


#define GEE_TYPE_ITERABLE (gee_iterable_get_type ())
#define GEE_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERABLE, GeeIterable))
#define GEE_IS_ITERABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERABLE))
#define GEE_ITERABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERABLE, GeeIterableIface))

typedef struct _GeeIterable GeeIterable;
typedef struct _GeeIterableIface GeeIterableIface;

#define GEE_TYPE_ITERATOR (gee_iterator_get_type ())
#define GEE_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_ITERATOR, GeeIterator))
#define GEE_IS_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_ITERATOR))
#define GEE_ITERATOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_ITERATOR, GeeIteratorIface))

typedef struct _GeeIterator GeeIterator;
typedef struct _GeeIteratorIface GeeIteratorIface;

#define GEE_TYPE_COLLECTION (gee_collection_get_type ())
#define GEE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_COLLECTION, GeeCollection))
#define GEE_IS_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_COLLECTION))
#define GEE_COLLECTION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_COLLECTION, GeeCollectionIface))

typedef struct _GeeCollection GeeCollection;
typedef struct _GeeCollectionIface GeeCollectionIface;

#define GEE_TYPE_QUEUE (gee_queue_get_type ())
#define GEE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_QUEUE, GeeQueue))
#define GEE_IS_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_QUEUE))
#define GEE_QUEUE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_QUEUE, GeeQueueIface))

typedef struct _GeeQueue GeeQueue;
typedef struct _GeeQueueIface GeeQueueIface;

#define GEE_TYPE_DEQUE (gee_deque_get_type ())
#define GEE_DEQUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_DEQUE, GeeDeque))
#define GEE_IS_DEQUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_DEQUE))
#define GEE_DEQUE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GEE_TYPE_DEQUE, GeeDequeIface))

typedef struct _GeeDeque GeeDeque;
typedef struct _GeeDequeIface GeeDequeIface;

struct _GeeIteratorIface {
	GTypeInterface parent_iface;
	gboolean (*next) (GeeIterator* self);
	gboolean (*has_next) (GeeIterator* self);
	gboolean (*first) (GeeIterator* self);
	gpointer (*get) (GeeIterator* self);
	void (*remove) (GeeIterator* self);
};

struct _GeeIterableIface {
	GTypeInterface parent_iface;
	GeeIterator* (*iterator) (GeeIterable* self);
	GType (*get_element_type) (GeeIterable* self);
};

struct _GeeCollectionIface {
	GTypeInterface parent_iface;
	gboolean (*contains) (GeeCollection* self, gconstpointer item);
	gboolean (*add) (GeeCollection* self, gconstpointer item);
	gboolean (*remove) (GeeCollection* self, gconstpointer item);
	void (*clear) (GeeCollection* self);
	gboolean (*add_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*contains_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*remove_all) (GeeCollection* self, GeeCollection* collection);
	gboolean (*retain_all) (GeeCollection* self, GeeCollection* collection);
	gpointer* (*to_array) (GeeCollection* self, int* result_length1);
	gint (*get_size) (GeeCollection* self);
	gboolean (*get_is_empty) (GeeCollection* self);
	GeeCollection* (*get_read_only_view) (GeeCollection* self);
};

struct _GeeQueueIface {
	GTypeInterface parent_iface;
	gboolean (*offer) (GeeQueue* self, gconstpointer element);
	gpointer (*peek) (GeeQueue* self);
	gpointer (*poll) (GeeQueue* self);
	gint (*drain) (GeeQueue* self, GeeCollection* recipient, gint amount);
	gint (*get_capacity) (GeeQueue* self);
	gint (*get_remaining_capacity) (GeeQueue* self);
	gboolean (*get_is_full) (GeeQueue* self);
};

struct _GeeDequeIface {
	GTypeInterface parent_iface;
	gboolean (*offer_head) (GeeDeque* self, gconstpointer element);
	gpointer (*peek_head) (GeeDeque* self);
	gpointer (*poll_head) (GeeDeque* self);
	gint (*drain_head) (GeeDeque* self, GeeCollection* recipient, gint amount);
	gboolean (*offer_tail) (GeeDeque* self, gconstpointer element);
	gpointer (*peek_tail) (GeeDeque* self);
	gpointer (*poll_tail) (GeeDeque* self);
	gint (*drain_tail) (GeeDeque* self, GeeCollection* recipient, gint amount);
};



GType gee_iterator_get_type (void) G_GNUC_CONST;
GType gee_iterable_get_type (void) G_GNUC_CONST;
GType gee_collection_get_type (void) G_GNUC_CONST;
GType gee_queue_get_type (void) G_GNUC_CONST;
GType gee_deque_get_type (void) G_GNUC_CONST;
gboolean gee_deque_offer_head (GeeDeque* self, gconstpointer element);
gpointer gee_deque_peek_head (GeeDeque* self);
gpointer gee_deque_poll_head (GeeDeque* self);
gint gee_deque_drain_head (GeeDeque* self, GeeCollection* recipient, gint amount);
gboolean gee_deque_offer_tail (GeeDeque* self, gconstpointer element);
gpointer gee_deque_peek_tail (GeeDeque* self);
gpointer gee_deque_poll_tail (GeeDeque* self);
gint gee_deque_drain_tail (GeeDeque* self, GeeCollection* recipient, gint amount);


/**
 * Offers the specified element to the head of this deque.
 *
 * @param element the element to offer to the queue
 *
 * @return        ``true`` if the element was added to the queue
 */
gboolean gee_deque_offer_head (GeeDeque* self, gconstpointer element) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_DEQUE_GET_INTERFACE (self)->offer_head (self, element);
}


/**
 * Peeks (retrieves, but not remove) an element from this queue.
 *
 * @return the element peeked from the queue (or ``null`` if none was
 *         available)
 */
gpointer gee_deque_peek_head (GeeDeque* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_DEQUE_GET_INTERFACE (self)->peek_head (self);
}


/**
 * Polls (retrieves and remove) an element from the head of this queue.
 *
 * @return the element polled from the queue (or ``null`` if none was
 *         available)
 */
gpointer gee_deque_poll_head (GeeDeque* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_DEQUE_GET_INTERFACE (self)->poll_head (self);
}


/**
 * Drains the specified amount of elements from the head of this queue in
 * the specified recipient collection.
 *
 * @param recipient the recipient collection to drain the elements to
 * @param amount    the amount of elements to drain
 *
 * @return          the amount of elements that were actually drained
 */
gint gee_deque_drain_head (GeeDeque* self, GeeCollection* recipient, gint amount) {
	g_return_val_if_fail (self != NULL, 0);
	return GEE_DEQUE_GET_INTERFACE (self)->drain_head (self, recipient, amount);
}


/**
 * Offers the specified element to the tail of this deque
 *
 * @param element the element to offer to the queue
 *
 * @return        ``true`` if the element was added to the queue
 */
gboolean gee_deque_offer_tail (GeeDeque* self, gconstpointer element) {
	g_return_val_if_fail (self != NULL, FALSE);
	return GEE_DEQUE_GET_INTERFACE (self)->offer_tail (self, element);
}


/**
 * Peeks (retrieves, but not remove) an element from the tail of this
 * queue.
 *
 * @return the element peeked from the queue (or ``null`` if none was
 *         available)
 */
gpointer gee_deque_peek_tail (GeeDeque* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_DEQUE_GET_INTERFACE (self)->peek_tail (self);
}


/**
 * Polls (retrieves and remove) an element from the tail of this queue.
 *
 * @return the element polled from the queue (or ``null`` if none was
 *         available)
 */
gpointer gee_deque_poll_tail (GeeDeque* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return GEE_DEQUE_GET_INTERFACE (self)->poll_tail (self);
}


/**
 * Drains the specified amount of elements from the tail of this queue in
 * the specified recipient collection.
 *
 * @param recipient the recipient collection to drain the elements to
 * @param amount    the amount of elements to drain
 *
 * @return          the amount of elements that were actually drained
 */
gint gee_deque_drain_tail (GeeDeque* self, GeeCollection* recipient, gint amount) {
	g_return_val_if_fail (self != NULL, 0);
	return GEE_DEQUE_GET_INTERFACE (self)->drain_tail (self, recipient, amount);
}


static void gee_deque_base_init (GeeDequeIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
 * A double-ended queue.
 *
 * A deque can be used either as a queue (First-In-First-Out behavior) or as a
 * stack (Last-In-First-Out behavior).
 *
 * The methods defined by this interface behaves exactely in the same way as
 * the {@link Queue} methods with respect to capacity bounds.
 *
 * The Deque interface inherits from the {@link Queue} interface. Thus, to use
 * a deque as a queue, you can equivalently use the folowing method set:
 *
 * ||<)(> ''Queue method'' ||<)(>  ''Deque method'' ||
 * || {@link Queue.offer}  || {@link offer_tail}    ||
 * || {@link Queue.peek}   || {@link peek_head}     ||
 * || {@link Queue.poll}   || {@link poll_head}     ||
 * || {@link Queue.drain}  || {@link drain_head}    ||
 *
 * To use a deque as a stack, just use the method set that acts at the head of
 * the deque:
 *
 * ||<)(> ''Operation'' ||<)(>  ''Deque method'' ||
 * || push an element   || {@link offer_head}    ||
 * || peek an element   || {@link peek_head}     ||
 * || pop an element    || {@link poll_head}     ||
 */
GType gee_deque_get_type (void) {
	static volatile gsize gee_deque_type_id__volatile = 0;
	if (g_once_init_enter (&gee_deque_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GeeDequeIface), (GBaseInitFunc) gee_deque_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType gee_deque_type_id;
		gee_deque_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeDeque", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (gee_deque_type_id, GEE_TYPE_QUEUE);
		g_once_init_leave (&gee_deque_type_id__volatile, gee_deque_type_id);
	}
	return gee_deque_type_id__volatile;
}



