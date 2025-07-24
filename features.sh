# Feature: Create csd file with 1 instr
#   A musician needs to design sound to express the
#   music.
# 
# Scenario: Process patch to generate csd file
#   Given the file "patches/mpatch3" exists
#   When I successfully run `./bin/modsyn patches/mpatch3 sound-design/feature.csd 4`
#   Then `sound-design/feature.csd` should exist


./bin/modsyn patches/mpatch3 sound-design/feature.csd 4
cat sound-design/feature.csd
