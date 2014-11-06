project(pirate-client)

set(srcDir src)

set(sources
  ${srcDir}/main.cpp
  ${srcDir}/action.cpp
  ${srcDir}/physics.cpp
  ${srcDir}/state.cpp
  ${srcDir}/ai.cpp
  ${srcDir}/entity.cpp
  ${srcDir}/render.cpp
)

add_executable(pirate-client ${sources})
target_link_libraries(pirate-client ${SDL2_LIBRARY})
install(TARGETS pirate-client RUNTIME DESTINATION ${BIN_DIR})
