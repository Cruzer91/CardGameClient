xpGetExtern(externIncs externLibs PUBLIC boost wxWidgets)
include_directories(${externIncs} ${CMAKE_SOURCE_DIR})
add_executable(client
ai.cpp
ai.h
card.cpp
card.h
cardPanel.cpp
cardPanel.h
client.cpp
client.h
crazyEights.cpp
crazyEights.h
crazyEightsScreen.cpp
crazyEightsScreen.h
frameManager.cpp
frameManager.h
gameOverDialog.cpp
gameOverDialog.h
heartsScreen.cpp
heartsScreen.h
imagePanel.cpp
imagePanel.h
loginFrame.cpp
loginFrame.h
mainMenu.cpp
mainMenu.h
myThread.cpp
myThread.h
player.cpp
player.h
suitDialog.cpp
suitDialog.h

)

target_link_libraries(client
${externLibs})
