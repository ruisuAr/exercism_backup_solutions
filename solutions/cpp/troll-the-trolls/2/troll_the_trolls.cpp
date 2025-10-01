namespace hellmath {
    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };
    enum class Action {
        read,
        write,
        remove
    };
    
    bool display_post(AccountStatus poster, AccountStatus viewer) {
        return poster == AccountStatus::troll ? viewer == AccountStatus::troll : true;
    }
    bool permission_check(Action action, AccountStatus status) {
        switch (status) {
            case AccountStatus::guest:
                return action == Action::read;
            case AccountStatus::troll:
            case AccountStatus::user:
                return action == Action::read || action == Action::write;
            case AccountStatus::mod:
            default:
                return true;    // todos los permisos
        }
    }
    bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
        switch (player1) {
            case AccountStatus::troll:
                return player2 == AccountStatus::troll;
            case AccountStatus::user:
            case AccountStatus::mod:
                return player2 == AccountStatus::user || player2 == AccountStatus::mod;
            case AccountStatus::guest:
            default:
                return false;    // invitados no pueden jugar
        }
    }
    bool has_priority(AccountStatus player1, AccountStatus player2) {
        return player1 > player2;
    }
}  // namespace hellmath
