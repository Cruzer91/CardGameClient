#include "client.h"
#include <cstdio>

// the main function and it starts MyApp via OnInit()
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {

  std::freopen("/deve/null", "w", stderr);
  wxInitAllImageHandlers();
  frameManager = new FrameManager();

  return true;
}
