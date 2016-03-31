#ifndef NAMES_H
#define NAMES_H

#define QUOTE(str) #str
#define EAQ(str) QUOTE(str)

#define ORIG_GAME_UPDATE _ZN3dsl12EventManager6updateEv
#define ORIG_GAME_UPDATE_STR EAQ(ORIG_GAME_UPDATE)

#endif // NAMES_H
