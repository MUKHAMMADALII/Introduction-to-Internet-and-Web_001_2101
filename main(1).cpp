class MainMenu {
public:
    MainMenu() {
        cout << "\n\n\n\n";
        cout << "\t\t"; cout << " □ □ □ □ □  □ □ □ □  □ □ □ □ □   □ □ □ □ □   □   □ □ □ □ □ \n";
        cout << "\t\t"; cout << "       □        □                 □         □          □   □   □             \n";
        cout << "\t\t"; cout << "       □        □                 □         □          □   □   □             \n";
        cout << "\t\t"; cout << "       □        □ □ □ □        □         □        □     □   □ □ □ □ □ \n";
        cout << "\t\t"; cout << "       □        □                 □         □ □  □        □               □ \n";
        cout << "\t\t"; cout << "       □        □                 □         □        □     □               □ \n";
        cout << "\t\t"; cout << "       □        □ □ □ □        □         □          □   □   □ □ □ □ □ \n\n\n\n\n";
        cout << "\t\t"; cout << "                게임을 시작하려면 아무키나 누르세요.\n\n\n\n\n\n\n";
        getchar(); // 아무키 입력 기다림
        system("cls"); // 콘솔 창 clear
    }
};