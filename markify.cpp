#include <iostream>
#include <map>
#include <cstdint>

#include "marcofont_def.in.h"

namespace {
static const std::uint8_t CHAR_ROWS = 5;
static const std::uint8_t CHAR_COLS = 3;

void print_char_line(const char& c, std::uint8_t line) {
  auto char_coords = character_map.find(std::toupper(c));
  if (char_coords != character_map.end()) {
    std::uint32_t x = char_coords->second.first;
    std::uint32_t y = char_coords->second.second;

    for (std::uint8_t i = 0; i < ::CHAR_COLS; i++) {
      auto value = character_matrix[::CHAR_ROWS * x + line][::CHAR_COLS * y + i];
      if (value) {
        std::cout << ":marcofont-" << (int)line << (int)i << ":";
      } else {
        std::cout << ":null:";
      }
    }
  }
}

void markify_word(const std::string& word) {
  for (std::uint8_t line = 0; line < ::CHAR_ROWS; line++) {
    for (const char& c : word) {
      ::print_char_line(c, line);
      std::cout << ":null:";
    }
    std::cout << std::endl;
  }
}

}

int main(int argc, char* argv[]) {
  initialize_character_map();

  for (int i = 1; i < argc; i++) {
    ::markify_word(argv[i]);
    std::cout << std::endl;
  }

  return 0;
}
