/*
  LV2 Darkglass Properties Extension
  Copyright 2024-2025 Filipe Coelho <falktx@darkglass.com>

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
   @file lv2_darkglass_properties.h
   C header for the LV2 Darkglass Properties extension <http://www.darkglass.com/lv2/ns>.
*/

#ifndef LV2_DARKGLASS_PROPERTIES_H
#define LV2_DARKGLASS_PROPERTIES_H

#define LV2_DARKGLASS_PROPERTIES_URI    "http://www.darkglass.com/lv2/ns"
#define LV2_DARKGLASS_PROPERTIES_PREFIX LV2_DARKGLASS_PROPERTIES_URI "#"

#define LV2_DARKGLASS_PROPERTIES__abbreviation          LV2_DARKGLASS_PROPERTIES_PREFIX "abbreviation"
#define LV2_DARKGLASS_PROPERTIES__blockImageOff         LV2_DARKGLASS_PROPERTIES_PREFIX "blockImageOff"
#define LV2_DARKGLASS_PROPERTIES__blockImageOn          LV2_DARKGLASS_PROPERTIES_PREFIX "blockImageOn"
#define LV2_DARKGLASS_PROPERTIES__mayUpdateBlockedState LV2_DARKGLASS_PROPERTIES_PREFIX "mayUpdateBlockedState"
#define LV2_DARKGLASS_PROPERTIES__oneDecimalPoint       LV2_DARKGLASS_PROPERTIES_PREFIX "oneDecimalPoint"
#define LV2_DARKGLASS_PROPERTIES__quickPot              LV2_DARKGLASS_PROPERTIES_PREFIX "quickPot"
#define LV2_DARKGLASS_PROPERTIES__savedToPreset         LV2_DARKGLASS_PROPERTIES_PREFIX "savedToPreset"

#endif /* LV2_DARKGLASS_PROPERTIES_H */
