#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/xuchen/myGithubRepo/game/xcode
  make -f /Users/xuchen/myGithubRepo/game/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/xuchen/myGithubRepo/game/xcode
  make -f /Users/xuchen/myGithubRepo/game/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/xuchen/myGithubRepo/game/xcode
  make -f /Users/xuchen/myGithubRepo/game/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/xuchen/myGithubRepo/game/xcode
  make -f /Users/xuchen/myGithubRepo/game/xcode/CMakeScripts/ReRunCMake.make
fi

