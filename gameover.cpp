
//쌓은 블록이 게임 종료 선에 닿았는지 체크
void check_gameover() {
    for (int X = 1; X < TABLE_X - 1; X++) {
        if (table[END_Y][X] == 3) return true;
    }
    return false;
}
};