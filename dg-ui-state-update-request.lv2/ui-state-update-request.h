/*
  LV2 UI State Update Request extension
  Copyright 2025 Darkglass Electronics

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

/**
   @file ui-state-update-request.h
   C header for the LV2 UI State Update Request extension <http://www.darkglass.com/lv2/ns/lv2ext/ui-state-update-request>.
*/

#ifndef LV2_UI_STATE_UPDATE_REQUEST_H
#define LV2_UI_STATE_UPDATE_REQUEST_H

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"

#define LV2_UI_STATE_UPDATE_REQUEST_URI    "http://www.darkglass.com/lv2/ns/lv2ext/ui-state-update-request"
#define LV2_UI_STATE_UPDATE_REQUEST_PREFIX LV2_UI_STATE_UPDATE_REQUEST_URI "#"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#else
#include <stdbool.h>
#endif

/** A status code for LV2_UI_STATE_UPDATE_REQUEST_URI functions. */
typedef enum {
	LV2_UI_STATE_UPDATE_SUCCESS           = 0,  /**< Completed successfully. */
	LV2_UI_STATE_UPDATE_ERR_UNKNOWN       = 1,  /**< Unknown error. */
	LV2_UI_STATE_UPDATE_ERR_INVALID_INDEX = 2   /**< Failed due to invalid port index. */
} LV2_UIState_Update_Status;

/** A status code for LV2_UI_STATE_UPDATE_REQUEST_URI functions. */
typedef enum {
	LV2_UI_STATE_NONE     = 0,  /**< Remove any previously set UI states. */
	LV2_UI_STATE_INACTIVE = 1,  /**< Inactive state (edits to port value are inaudible / ineffective at the moment). */
	LV2_UI_STATE_BLOCKED  = 2   /**< Blocked state (all edits to this port's value should be blocked and are ignored internally in the plugin). */
} LV2_UIState;

/**
 *  Opaque handle for LV2_UI_STATE_UPDATE_REQUEST_URI feature.
 */
typedef void* LV2_UIState_Update_Request_Handle;

/**
 * On instantiation, host must supply LV2_UI_STATE_UPDATE_REQUEST_URI feature.
 * LV2_Feature::data must be pointer to LV2_UIState_Update_Request.
*/
typedef struct _LV2_UIState_Update_Request {
    /**
     *  Opaque host data.
     */
    LV2_UIState_Update_Request_Handle handle;

    /**
     * request_change()
     *
     * Ask the host to change a plugin's control port's UI state.
     * Parameter handle MUST be the 'handle' member of this struct.
     * Parameter index is port index to change.
     * Parameter state is the requested state to set the control port to.
     *
     * Returns status of the request.
     *
     * The plugin MUST call this function during run().
     */
    LV2_UIState_Update_Status (*request_change)(LV2_UIState_Update_Request_Handle handle,
                                                uint32_t index,
                                                LV2_UIState state);

} LV2_UIState_Update_Request;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV2_UI_STATE_UPDATE_REQUEST_H */
