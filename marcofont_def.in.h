const std::uint8_t character_matrix[20][30] =
  { { 1,1,1, 0,0,1 ,1,1,1, 1,1,1, 1,0,1, 1,1,1, 1,1,1, 1,1,1, 1,1,1, 1,1,1 }
  , { 1,0,1, 0,0,1 ,0,0,1, 0,0,1, 1,0,1, 1,0,0, 1,0,0, 0,0,1, 1,0,1, 1,0,1 }
  , { 1,0,1, 0,0,1 ,1,1,1, 1,1,1, 1,1,1, 1,1,1, 1,1,1, 0,1,1, 1,1,1, 1,1,1 }
  , { 1,0,1, 0,0,1 ,1,0,0, 0,0,1, 0,0,1, 0,0,1, 1,0,1, 0,0,1, 1,0,1, 0,0,1 }
  , { 1,1,1, 0,0,1 ,1,1,1, 1,1,1, 0,0,1, 1,1,1, 1,1,1, 0,0,1, 1,1,1, 0,0,1 }

  , { 0,1,0, 1,1,1 ,0,1,1, 1,1,0, 1,1,1, 1,1,1, 0,1,1, 1,0,1, 1,1,1, 0,0,1 }
  , { 1,0,1, 1,0,1 ,1,0,0, 1,0,1, 1,0,0, 1,0,0, 1,0,0, 1,0,1, 0,1,0, 0,0,1 }
  , { 1,1,1, 1,1,0 ,1,0,0, 1,0,1, 1,1,0, 1,1,0, 1,0,1, 1,1,1, 0,1,0, 0,0,1 }
  , { 1,0,1, 1,0,1 ,1,0,0, 1,0,1, 1,0,0, 1,0,0, 1,0,1, 1,0,1, 0,1,0, 1,0,1 }
  , { 1,0,1, 1,1,1 ,0,1,1, 1,1,0, 1,1,1, 1,0,0, 0,1,1, 1,0,1, 1,1,1, 0,1,0 }

  , { 1,0,0, 1,0,0 ,1,0,1, 0,0,1, 0,1,0, 1,1,1, 1,1,1, 1,1,1, 0,1,1, 1,1,1 }
  , { 1,0,1, 1,0,0 ,1,1,1, 1,0,1, 1,0,1, 1,0,1, 1,0,1, 1,0,1, 1,0,0, 0,1,0 }
  , { 1,1,0, 1,0,0 ,1,0,1, 1,1,1, 1,0,1, 1,1,1, 1,0,1, 1,1,0, 1,1,1, 0,1,0 }
  , { 1,0,1, 1,0,0 ,1,0,1, 1,0,1, 1,0,1, 1,0,0, 1,1,1, 1,0,1, 0,0,1, 0,1,0 }
  , { 1,0,1, 1,1,1 ,1,0,1, 1,0,0, 0,1,0, 1,0,0, 0,0,1, 1,0,1, 1,1,0, 0,1,0 }

  , { 1,0,1, 1,0,1 ,1,0,1, 1,0,1, 1,0,1, 1,1,1, 0,0,0, 0,0,0, 1,1,1, 0,1,0 }
  , { 1,0,1, 1,0,1 ,1,0,1, 1,0,1, 1,0,1, 0,0,1, 0,0,0, 0,0,0, 1,0,1, 0,1,0 }
  , { 1,0,1, 1,0,1 ,1,0,1, 0,1,0, 1,1,1, 0,1,0, 0,0,0, 0,0,0, 0,1,1, 0,1,0 }
  , { 1,0,1, 1,0,1 ,1,1,1, 1,0,1, 0,1,0, 1,0,0, 0,1,0, 0,1,0, 0,0,0, 0,0,0 }
  , { 1,1,1, 0,1,0 ,1,0,1, 1,0,1, 0,1,0, 1,1,1, 0,0,0, 1,0,0, 0,1,0, 0,1,0 } };

std::map<char,std::pair<std::uint32_t,std::uint32_t>> character_map;

void initialize_character_map() {
  character_map['0'] = std::make_pair( 0, 0 ); character_map['1'] = std::make_pair( 0, 1 );
  character_map['2'] = std::make_pair( 0, 2 ); character_map['3'] = std::make_pair( 0, 3 );
  character_map['4'] = std::make_pair( 0, 4 ); character_map['5'] = std::make_pair( 0, 5 );
  character_map['6'] = std::make_pair( 0, 6 ); character_map['7'] = std::make_pair( 0, 7 );
  character_map['8'] = std::make_pair( 0, 8 ); character_map['9'] = std::make_pair( 0, 9 );
  character_map['A'] = std::make_pair( 1, 0 ); character_map['B'] = std::make_pair( 1, 1 );
  character_map['C'] = std::make_pair( 1, 2 ); character_map['D'] = std::make_pair( 1, 3 );
  character_map['E'] = std::make_pair( 1, 4 ); character_map['F'] = std::make_pair( 1, 5 );
  character_map['G'] = std::make_pair( 1, 6 ); character_map['H'] = std::make_pair( 1, 7 );
  character_map['I'] = std::make_pair( 1, 8 ); character_map['J'] = std::make_pair( 1, 9 );
  character_map['K'] = std::make_pair( 2, 0 ); character_map['L'] = std::make_pair( 2, 1 );
  character_map['M'] = std::make_pair( 2, 2 ); character_map['N'] = std::make_pair( 2, 3 );
  character_map['O'] = std::make_pair( 2, 4 ); character_map['P'] = std::make_pair( 2, 5 );
  character_map['Q'] = std::make_pair( 2, 6 ); character_map['R'] = std::make_pair( 2, 7 );
  character_map['S'] = std::make_pair( 2, 8 ); character_map['T'] = std::make_pair( 2, 9 );
  character_map['U'] = std::make_pair( 3, 0 ); character_map['V'] = std::make_pair( 3, 1 );
  character_map['W'] = std::make_pair( 3, 2 ); character_map['X'] = std::make_pair( 3, 3 );
  character_map['Y'] = std::make_pair( 3, 4 ); character_map['Z'] = std::make_pair( 3, 5 );
  character_map['.'] = std::make_pair( 3, 6 ); character_map[','] = std::make_pair( 3, 7 );
  character_map['?'] = std::make_pair( 3, 8 ); character_map['!'] = std::make_pair( 3, 9 );
}
