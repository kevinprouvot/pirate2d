project(pirate-client)

set(srcDir pirate-client)
set(controllersDir ${srcDir}/controllers)
set(factoriesDir ${srcDir}/factories)

set(sources
  ${srcDir}/main.cpp
  ${srcDir}/action.cpp
  ${srcDir}/base.h
  ${srcDir}/physics.cpp
  ${srcDir}/state.cpp
  ${srcDir}/ai.cpp
  ${srcDir}/entity.cpp
  ${srcDir}/rect.h
  ${srcDir}/render.cpp
  ${srcDir}/vectors.h

)

include_directories(include)
include_directories(external)

add_executable(pirate-client ${sources})
target_link_libraries(pirate-client ${SDL2_LIBRARY})
install(TARGETS pirate-client RUNTIME DESTINATION ${BIN_DIR})
