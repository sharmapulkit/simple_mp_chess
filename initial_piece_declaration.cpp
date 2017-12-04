static piece INITIAL_PIECES_0 = piece('R', false, (coordinates) {0, 0});
static piece INITIAL_PIECES_1 = piece('N', false, (coordinates) {1, 0});
static piece INITIAL_PIECES_2 = piece('B', false, (coordinates) {2, 0});
static piece INITIAL_PIECES_3 = piece('Q', false, (coordinates) {3, 0});
static piece INITIAL_PIECES_4 = piece('K', false, (coordinates) {4, 0});
static piece INITIAL_PIECES_5 = piece('B', false, (coordinates) {5, 0});
static piece INITIAL_PIECES_6 = piece('N', false, (coordinates) {6, 0});
static piece INITIAL_PIECES_7 = piece('R', false, (coordinates) {7, 0});
static piece INITIAL_PIECES_8 = piece('P', false, (coordinates) {0, 1});
static piece INITIAL_PIECES_9 = piece('P', false, (coordinates) {1, 1});
static piece INITIAL_PIECES_10 = piece('P', false, (coordinates) {2, 1});
static piece INITIAL_PIECES_11 = piece('P', false, (coordinates) {3, 1});
static piece INITIAL_PIECES_12 = piece('P', false, (coordinates) {4, 1});
static piece INITIAL_PIECES_13 = piece('P', false, (coordinates) {5, 1});
static piece INITIAL_PIECES_14 = piece('P', false, (coordinates) {6, 1});
static piece INITIAL_PIECES_15 = piece('P', false, (coordinates) {7, 1});
static piece INITIAL_PIECES_16 = piece('R', true, (coordinates) {0, 7});
static piece INITIAL_PIECES_17 = piece('N', true, (coordinates) {1, 7});
static piece INITIAL_PIECES_18 = piece('B', true, (coordinates) {2, 7});
static piece INITIAL_PIECES_19 = piece('Q', true, (coordinates) {3, 7});
static piece INITIAL_PIECES_20 = piece('K', true, (coordinates) {4, 7});
static piece INITIAL_PIECES_21 = piece('B', true, (coordinates) {5, 7});
static piece INITIAL_PIECES_22 = piece('N', true, (coordinates) {6, 7});
static piece INITIAL_PIECES_23 = piece('R', true, (coordinates) {7, 7});
static piece INITIAL_PIECES_24 = piece('P', true, (coordinates) {0, 6});
static piece INITIAL_PIECES_25 = piece('P', true, (coordinates) {1, 6});
static piece INITIAL_PIECES_26 = piece('P', true, (coordinates) {2, 6});
static piece INITIAL_PIECES_27 = piece('P', true, (coordinates) {3, 6});
static piece INITIAL_PIECES_28 = piece('P', true, (coordinates) {4, 6});
static piece INITIAL_PIECES_29 = piece('P', true, (coordinates) {5, 6});
static piece INITIAL_PIECES_30 = piece('P', true, (coordinates) {6, 6});
static piece INITIAL_PIECES_31 = piece('P', true, (coordinates) {7, 6});
static piece INITIAL_PIECES[32] ={
	INITIAL_PIECES_0,
	INITIAL_PIECES_1, 
	INITIAL_PIECES_2,
	INITIAL_PIECES_3,
	INITIAL_PIECES_4,
	INITIAL_PIECES_5,
	INITIAL_PIECES_6,
	INITIAL_PIECES_7,
	INITIAL_PIECES_8,
	INITIAL_PIECES_9,
	INITIAL_PIECES_10,
	INITIAL_PIECES_11,
	INITIAL_PIECES_12,
	INITIAL_PIECES_13,
	INITIAL_PIECES_14,
	INITIAL_PIECES_15,
	INITIAL_PIECES_16,
	INITIAL_PIECES_17,
	INITIAL_PIECES_18,
	INITIAL_PIECES_19,
	INITIAL_PIECES_20,
	INITIAL_PIECES_21,
	INITIAL_PIECES_22,
	INITIAL_PIECES_23,
	INITIAL_PIECES_24,
	INITIAL_PIECES_25,
	INITIAL_PIECES_26,
	INITIAL_PIECES_27,
	INITIAL_PIECES_28,
	INITIAL_PIECES_29,
	INITIAL_PIECES_30,
	INITIAL_PIECES_31
};

// piece * INITIAL_PIECES = new piece[32];
// coordinates temp_assign_p;
// INITIAL_PIECES[0] = piece('R', false, temp_assign_p = (coordinates) {0, 0});
// INITIAL_PIECES[1] = piece('N', false, temp_assign_p = (coordinates) {1, 0});
// INITIAL_PIECES[2] = piece('B', false, temp_assign_p = (coordinates) {2, 0});
// INITIAL_PIECES[3] = piece('Q', false, temp_assign_p = (coordinates) {3, 0});
// INITIAL_PIECES[4] = piece('K', false, temp_assign_p = (coordinates) {4, 0});
// INITIAL_PIECES[5] = piece('B', false, temp_assign_p = (coordinates) {5, 0});
// INITIAL_PIECES[6] = piece('N', false, temp_assign_p = (coordinates) {6, 0});
// INITIAL_PIECES[7] = piece('R', false, temp_assign_p = (coordinates) {7, 0});
// INITIAL_PIECES[8] = piece('P', false, temp_assign_p = (coordinates) {0, 1});
// INITIAL_PIECES[9] = piece('P', false, temp_assign_p = (coordinates) {1, 1});
// INITIAL_PIECES[10] = piece('P', false, temp_assign_p = (coordinates) {2, 1});
// INITIAL_PIECES[11] = piece('P', false, temp_assign_p = (coordinates) {3, 1});
// INITIAL_PIECES[12] = piece('P', false, temp_assign_p = (coordinates) {4, 1});
// INITIAL_PIECES[13] = piece('P', false, temp_assign_p = (coordinates) {5, 1});
// INITIAL_PIECES[14] = piece('P', false, temp_assign_p = (coordinates) {6, 1});
// INITIAL_PIECES[15] = piece('P', false, temp_assign_p = (coordinates) {7, 1});
// INITIAL_PIECES[16] = piece('R', true, temp_assign_p = (coordinates) {0, 7});
// INITIAL_PIECES[17] = piece('N', true, temp_assign_p = (coordinates) {1, 7});
// INITIAL_PIECES[18] = piece('B', true, temp_assign_p = (coordinates) {2, 7});
// INITIAL_PIECES[19] = piece('Q', true, temp_assign_p = (coordinates) {3, 7});
// INITIAL_PIECES[20] = piece('K', true, temp_assign_p = (coordinates) {4, 7});
// INITIAL_PIECES[21] = piece('N', true, temp_assign_p = (coordinates) {5, 7});
// INITIAL_PIECES[22] = piece('R', true, temp_assign_p = (coordinates) {6, 7});
// INITIAL_PIECES[23] = piece('P', true, temp_assign_p = (coordinates) {7, 7});
// INITIAL_PIECES[24] = piece('P', true, temp_assign_p = (coordinates) {0, 6});
// INITIAL_PIECES[25] = piece('P', true, temp_assign_p = (coordinates) {1, 6});
// INITIAL_PIECES[26] = piece('P', true, temp_assign_p = (coordinates) {2, 6});
// INITIAL_PIECES[27] = piece('P', true, temp_assign_p = (coordinates) {3, 6});
// INITIAL_PIECES[28] = piece('P', true, temp_assign_p = (coordinates) {4, 6});
// INITIAL_PIECES[29] = piece('P', true, temp_assign_p = (coordinates) {5, 6});
// INITIAL_PIECES[30] = piece('P', true, temp_assign_p = (coordinates) {6, 6});
// INITIAL_PIECES[31] = piece('P', true, temp_assign_p = (coordinates) {7, 6});