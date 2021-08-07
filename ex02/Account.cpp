//
// Created by Redwyn Poetess on 8/7/21.
//

class Account {
public:
    typedef Account		t;

    static int	getNbAccounts( void ) {
        return _nbAccounts;
    }
    static int	getTotalAmount( void ) {
        return _totalAmount;
    }
    static int	getNbDeposits( void ) {
        return _totalNbDeposits;
    }
    static int	getNbWithdrawals( void ) {
        return _totalNbWithdrawals;
    }
    static void	displayAccountsInfos( void ) {
        //std::cout<<getNbAccounts()<<getTotalAmount()<<getNbDeposits()<<getNbWithdrawals();
    }

    Account( int initial_deposit );
    ~Account( void );

    void	makeDeposit( int deposit ) {
        _totalNbWithdrawals += deposit;
    }
    bool	makeWithdrawal( int withdrawal ) {
        if (_totalAmount >= withdrawal)
            return true;
        else
            return false;
    }
    int		checkAmount( void ) const {
        return _totalAmount;
    }
    void	displayStatus( void ) const {
    }
private:
    static int	_nbAccounts;
    static int	_totalAmount;
    static int	_totalNbDeposits;
    static int	_totalNbWithdrawals;

    static void	_displayTimestamp( void ) {

    }

    int				_accountIndex;
    int				_amount;
    int				_nbDeposits;
    int				_nbWithdrawals;

    Account( void );
};