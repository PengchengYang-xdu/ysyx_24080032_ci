/***************************************************************************************
deigned by ypc
***************************************************************************************/

#include <common.h>
#include <circuit.h>
#include <mem.h>
#include <utils.h>

void init_monitor(int, char *[]);
void sdb_mainloop();

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
  }
  init_monitor(argc, argv);
  init_wave();
  reset(10);
  sdb_mainloop();
  close_wave();
}
