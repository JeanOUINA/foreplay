#include "foreplay.h"

int main(int argc, char** argv) {
  g_autoptr(Foreplay) app = foreplay_new();
  return g_application_run(G_APPLICATION(app), argc, argv);
}
