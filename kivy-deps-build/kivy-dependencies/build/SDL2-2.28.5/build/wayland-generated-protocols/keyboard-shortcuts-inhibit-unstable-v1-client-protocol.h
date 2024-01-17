/* Generated by wayland-scanner 1.18.0 */

#ifndef KEYBOARD_SHORTCUTS_INHIBIT_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define KEYBOARD_SHORTCUTS_INHIBIT_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_keyboard_shortcuts_inhibit_unstable_v1 The keyboard_shortcuts_inhibit_unstable_v1 protocol
 * Protocol for inhibiting the compositor keyboard shortcuts
 *
 * @section page_desc_keyboard_shortcuts_inhibit_unstable_v1 Description
 *
 * This protocol specifies a way for a client to request the compositor
 * to ignore its own keyboard shortcuts for a given seat, so that all
 * key events from that seat get forwarded to a surface.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible
 * changes may be added together with the corresponding interface
 * version bump.
 * Backward incompatible changes are done by bumping the version
 * number in the protocol and interface names and resetting the
 * interface version. Once the protocol is to be declared stable,
 * the 'z' prefix and the version number in the protocol and
 * interface names are removed and the interface version number is
 * reset.
 *
 * @section page_ifaces_keyboard_shortcuts_inhibit_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_keyboard_shortcuts_inhibit_manager_v1 - context object for keyboard grab_manager
 * - @subpage page_iface_zwp_keyboard_shortcuts_inhibitor_v1 - context object for keyboard shortcuts inhibitor
 * @section page_copyright_keyboard_shortcuts_inhibit_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2017 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_seat;
struct wl_surface;
struct zwp_keyboard_shortcuts_inhibit_manager_v1;
struct zwp_keyboard_shortcuts_inhibitor_v1;

/**
 * @page page_iface_zwp_keyboard_shortcuts_inhibit_manager_v1 zwp_keyboard_shortcuts_inhibit_manager_v1
 * @section page_iface_zwp_keyboard_shortcuts_inhibit_manager_v1_desc Description
 *
 * A global interface used for inhibiting the compositor keyboard shortcuts.
 * @section page_iface_zwp_keyboard_shortcuts_inhibit_manager_v1_api API
 * See @ref iface_zwp_keyboard_shortcuts_inhibit_manager_v1.
 */
/**
 * @defgroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1 The zwp_keyboard_shortcuts_inhibit_manager_v1 interface
 *
 * A global interface used for inhibiting the compositor keyboard shortcuts.
 */
extern const struct wl_interface zwp_keyboard_shortcuts_inhibit_manager_v1_interface;
/**
 * @page page_iface_zwp_keyboard_shortcuts_inhibitor_v1 zwp_keyboard_shortcuts_inhibitor_v1
 * @section page_iface_zwp_keyboard_shortcuts_inhibitor_v1_desc Description
 *
 * A keyboard shortcuts inhibitor instructs the compositor to ignore
 * its own keyboard shortcuts when the associated surface has keyboard
 * focus. As a result, when the surface has keyboard focus on the given
 * seat, it will receive all key events originating from the specified
 * seat, even those which would normally be caught by the compositor for
 * its own shortcuts.
 *
 * The Wayland compositor is however under no obligation to disable
 * all of its shortcuts, and may keep some special key combo for its own
 * use, including but not limited to one allowing the user to forcibly
 * restore normal keyboard events routing in the case of an unwilling
 * client. The compositor may also use the same key combo to reactivate
 * an existing shortcut inhibitor that was previously deactivated on
 * user request.
 *
 * When the compositor restores its own keyboard shortcuts, an
 * "inactive" event is emitted to notify the client that the keyboard
 * shortcuts inhibitor is not effectively active for the surface and
 * seat any more, and the client should not expect to receive all
 * keyboard events.
 *
 * When the keyboard shortcuts inhibitor is inactive, the client has
 * no way to forcibly reactivate the keyboard shortcuts inhibitor.
 *
 * The user can chose to re-enable a previously deactivated keyboard
 * shortcuts inhibitor using any mechanism the compositor may offer,
 * in which case the compositor will send an "active" event to notify
 * the client.
 *
 * If the surface is destroyed, unmapped, or loses the seat's keyboard
 * focus, the keyboard shortcuts inhibitor becomes irrelevant and the
 * compositor will restore its own keyboard shortcuts but no "inactive"
 * event is emitted in this case.
 * @section page_iface_zwp_keyboard_shortcuts_inhibitor_v1_api API
 * See @ref iface_zwp_keyboard_shortcuts_inhibitor_v1.
 */
/**
 * @defgroup iface_zwp_keyboard_shortcuts_inhibitor_v1 The zwp_keyboard_shortcuts_inhibitor_v1 interface
 *
 * A keyboard shortcuts inhibitor instructs the compositor to ignore
 * its own keyboard shortcuts when the associated surface has keyboard
 * focus. As a result, when the surface has keyboard focus on the given
 * seat, it will receive all key events originating from the specified
 * seat, even those which would normally be caught by the compositor for
 * its own shortcuts.
 *
 * The Wayland compositor is however under no obligation to disable
 * all of its shortcuts, and may keep some special key combo for its own
 * use, including but not limited to one allowing the user to forcibly
 * restore normal keyboard events routing in the case of an unwilling
 * client. The compositor may also use the same key combo to reactivate
 * an existing shortcut inhibitor that was previously deactivated on
 * user request.
 *
 * When the compositor restores its own keyboard shortcuts, an
 * "inactive" event is emitted to notify the client that the keyboard
 * shortcuts inhibitor is not effectively active for the surface and
 * seat any more, and the client should not expect to receive all
 * keyboard events.
 *
 * When the keyboard shortcuts inhibitor is inactive, the client has
 * no way to forcibly reactivate the keyboard shortcuts inhibitor.
 *
 * The user can chose to re-enable a previously deactivated keyboard
 * shortcuts inhibitor using any mechanism the compositor may offer,
 * in which case the compositor will send an "active" event to notify
 * the client.
 *
 * If the surface is destroyed, unmapped, or loses the seat's keyboard
 * focus, the keyboard shortcuts inhibitor becomes irrelevant and the
 * compositor will restore its own keyboard shortcuts but no "inactive"
 * event is emitted in this case.
 */
extern const struct wl_interface zwp_keyboard_shortcuts_inhibitor_v1_interface;

#ifndef ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_ERROR_ENUM
#define ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_ERROR_ENUM
enum zwp_keyboard_shortcuts_inhibit_manager_v1_error {
	/**
	 * the shortcuts are already inhibited for this surface
	 */
	ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_ERROR_ALREADY_INHIBITED = 0,
};
#endif /* ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_ERROR_ENUM */

#define ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_DESTROY 0
#define ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_INHIBIT_SHORTCUTS 1


/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1
 */
#define ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1
 */
#define ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_INHIBIT_SHORTCUTS_SINCE_VERSION 1

/** @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1 */
static inline void
zwp_keyboard_shortcuts_inhibit_manager_v1_set_user_data(struct zwp_keyboard_shortcuts_inhibit_manager_v1 *zwp_keyboard_shortcuts_inhibit_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1, user_data);
}

/** @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1 */
static inline void *
zwp_keyboard_shortcuts_inhibit_manager_v1_get_user_data(struct zwp_keyboard_shortcuts_inhibit_manager_v1 *zwp_keyboard_shortcuts_inhibit_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1);
}

static inline uint32_t
zwp_keyboard_shortcuts_inhibit_manager_v1_get_version(struct zwp_keyboard_shortcuts_inhibit_manager_v1 *zwp_keyboard_shortcuts_inhibit_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1);
}

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1
 *
 * Destroy the keyboard shortcuts inhibitor manager.
 */
static inline void
zwp_keyboard_shortcuts_inhibit_manager_v1_destroy(struct zwp_keyboard_shortcuts_inhibit_manager_v1 *zwp_keyboard_shortcuts_inhibit_manager_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1,
			 ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1);
}

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibit_manager_v1
 *
 * Create a new keyboard shortcuts inhibitor object associated with
 * the given surface for the given seat.
 *
 * If shortcuts are already inhibited for the specified seat and surface,
 * a protocol error "already_inhibited" is raised by the compositor.
 */
static inline struct zwp_keyboard_shortcuts_inhibitor_v1 *
zwp_keyboard_shortcuts_inhibit_manager_v1_inhibit_shortcuts(struct zwp_keyboard_shortcuts_inhibit_manager_v1 *zwp_keyboard_shortcuts_inhibit_manager_v1, struct wl_surface *surface, struct wl_seat *seat)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_keyboard_shortcuts_inhibit_manager_v1,
			 ZWP_KEYBOARD_SHORTCUTS_INHIBIT_MANAGER_V1_INHIBIT_SHORTCUTS, &zwp_keyboard_shortcuts_inhibitor_v1_interface, NULL, surface, seat);

	return (struct zwp_keyboard_shortcuts_inhibitor_v1 *) id;
}

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 * @struct zwp_keyboard_shortcuts_inhibitor_v1_listener
 */
struct zwp_keyboard_shortcuts_inhibitor_v1_listener {
	/**
	 * shortcuts are inhibited
	 *
	 * This event indicates that the shortcut inhibitor is active.
	 *
	 * The compositor sends this event every time compositor shortcuts
	 * are inhibited on behalf of the surface. When active, the client
	 * may receive input events normally reserved by the compositor
	 * (see zwp_keyboard_shortcuts_inhibitor_v1).
	 *
	 * This occurs typically when the initial request
	 * "inhibit_shortcuts" first becomes active or when the user
	 * instructs the compositor to re-enable and existing shortcuts
	 * inhibitor using any mechanism offered by the compositor.
	 */
	void (*active)(void *data,
		       struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1);
	/**
	 * shortcuts are restored
	 *
	 * This event indicates that the shortcuts inhibitor is inactive,
	 * normal shortcuts processing is restored by the compositor.
	 */
	void (*inactive)(void *data,
			 struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1);
};

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 */
static inline int
zwp_keyboard_shortcuts_inhibitor_v1_add_listener(struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1,
						 const struct zwp_keyboard_shortcuts_inhibitor_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1,
				     (void (**)(void)) listener, data);
}

#define ZWP_KEYBOARD_SHORTCUTS_INHIBITOR_V1_DESTROY 0

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 */
#define ZWP_KEYBOARD_SHORTCUTS_INHIBITOR_V1_ACTIVE_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 */
#define ZWP_KEYBOARD_SHORTCUTS_INHIBITOR_V1_INACTIVE_SINCE_VERSION 1

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 */
#define ZWP_KEYBOARD_SHORTCUTS_INHIBITOR_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1 */
static inline void
zwp_keyboard_shortcuts_inhibitor_v1_set_user_data(struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1, user_data);
}

/** @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1 */
static inline void *
zwp_keyboard_shortcuts_inhibitor_v1_get_user_data(struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1);
}

static inline uint32_t
zwp_keyboard_shortcuts_inhibitor_v1_get_version(struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1);
}

/**
 * @ingroup iface_zwp_keyboard_shortcuts_inhibitor_v1
 *
 * Remove the keyboard shortcuts inhibitor from the associated wl_surface.
 */
static inline void
zwp_keyboard_shortcuts_inhibitor_v1_destroy(struct zwp_keyboard_shortcuts_inhibitor_v1 *zwp_keyboard_shortcuts_inhibitor_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1,
			 ZWP_KEYBOARD_SHORTCUTS_INHIBITOR_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_keyboard_shortcuts_inhibitor_v1);
}

#ifdef  __cplusplus
}
#endif

#endif
