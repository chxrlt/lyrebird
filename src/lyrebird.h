#ifndef LYREBIRD_LYREBIRD
#define LYREBIRD_LYREBIRD

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <pulse/pulseaudio.h>
#include <pulse/glib-mainloop.h>
#include <pulse/error.h>

struct lyrebird_internal_t {
  float semitones;

  pa_context *pa_context;

	pa_stream *record_stream;
	pa_stream *playback_stream;
} typedef lyrebird_internal_t;

#include "pulse.h"
#include "rubberband.h"

#endif