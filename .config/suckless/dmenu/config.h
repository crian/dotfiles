/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=9:antialias=true:autohint=true"
};
static const char *prompt = NULL;           /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                         fg         bg       */
	[SchemeNorm]          = { "#ebdbb2", "#282828" },
	[SchemeSel]           = { "#282828", "#458588" },
	[SchemeSelHighlight]  = { "#d79921", "#458588" },
	[SchemeNormHighlight] = { "#d79921", "#282828" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeOutHighlight]  = { "#ffc978", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
