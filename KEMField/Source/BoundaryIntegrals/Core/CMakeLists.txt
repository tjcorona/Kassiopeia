# CMakeLists for KEMField/BoundaryIntegrals
# Author: T.J. Corona

kasper_internal_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set (BOUNDARYINTEGRALSCORE_HEADERFILES
  ${CMAKE_CURRENT_SOURCE_DIR}/include/KBoundaryIntegralMatrix.hh
  ${CMAKE_CURRENT_SOURCE_DIR}/include/KBoundaryIntegralVector.hh
  ${CMAKE_CURRENT_SOURCE_DIR}/include/KBoundaryIntegralSolutionVector.hh
  ${CMAKE_CURRENT_SOURCE_DIR}/include/KBoundaryMatrixGenerator.hh
)

kasper_install_headers (${BOUNDARYINTEGRALSCORE_HEADERFILES})
