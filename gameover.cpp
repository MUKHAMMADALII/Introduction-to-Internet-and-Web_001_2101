
//���� ����� ���� ���� ���� ��Ҵ��� üũ
void check_gameover() {
    for (int X = 1; X < TABLE_X - 1; X++) {
        if (table[END_Y][X] == 3) return true;
    }
    return false;
}
};