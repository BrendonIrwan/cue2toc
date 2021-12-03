# cue2toc

—Cuesheet to TOC converter with a bugfix.

## About

Attempts to contact the author about two bugs in this 17-year-old piece of
software returned nothing. This repository has the patch `cue2toc.c.diff`
applied and nothing more.

See [[http://cue2toc.sourceforge.net](http://cue2toc.sourceforge.net)] for
information about cue2toc.

### Bugs Fixed

1. Absolute index timestamps don't work with cdrdao (1.2.4); they have to be
relative to the start of their track.

2. Author used the wrong variable to check the tr->indexes index during writing.
This breaks a track with 99 indexes.
