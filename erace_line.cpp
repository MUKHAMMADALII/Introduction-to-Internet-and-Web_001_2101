

void erace_line() {                                 //한 줄이 곽 차면 삭제하기
    for (int Y = END_Y + 1; Y < TABLE_Y - 1; Y++) {
        bool isLinear = true;
        for (int X = 1; X < TABLE_X - 1; X++) {
            if (table[Y][X] != 3) isLinear = false;
        }
        if (isLinear) {
            for (int i = Y; i > END_Y - 1; i--) {
                for (int j = 1; j < TABLE_X - 1; j++) {
                    table[i][j] = table[i - 1][j];
                }
            }
        }
    }
}
