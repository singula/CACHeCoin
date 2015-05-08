#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *cachecoin_strings[] = {
QT_TRANSLATE_NOOP("cachecoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
" %s\n"
"It is recommended you use the following random password:\n"
"rpcuser=cachecoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Cannot obtain a lock on data directory %s.  Cachecoin is probably already "
"running."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Detach block and address databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Error initializing database environment %s! To recover, BACKUP THAT "
"DIRECTORY, then remove everything from it except for wallet.dat."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Error: Wallet unlocked for block minting only, unable to create transaction."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Listen for JSON-RPC connections on <port> (default: 2224 or testnet: 12224)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Unable to bind to %s on this computer. Cachecoin is probably already running."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Cachecoin will not work properly."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("cachecoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("cachecoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("cachecoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("cachecoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("cachecoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("cachecoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("cachecoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("cachecoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("cachecoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("cachecoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("cachecoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Don't generate coins"),
QT_TRANSLATE_NOOP("cachecoin-core", "Done loading"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error loading blkindex.dat"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error loading wallet.dat: Wallet requires newer version of Cachecoin"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error"),
QT_TRANSLATE_NOOP("cachecoin-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("cachecoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("cachecoin-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("cachecoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("cachecoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("cachecoin-core", "Find peers using DNS lookup (default: 0)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Find peers using internet relay chat (default: 1)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Generate coins"),
QT_TRANSLATE_NOOP("cachecoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("cachecoin-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("cachecoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Importing blockchain data file."),
QT_TRANSLATE_NOOP("cachecoin-core", "Importing bootstrap blockchain data file."),
QT_TRANSLATE_NOOP("cachecoin-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("cachecoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("cachecoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("cachecoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("cachecoin-core", "List commands"),
QT_TRANSLATE_NOOP("cachecoin-core", "Listen for connections on <port> (default: 7777 or testnet: 17777)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cachecoin version"),
QT_TRANSLATE_NOOP("cachecoin-core", "Cachecoin"),
QT_TRANSLATE_NOOP("cachecoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Options:"),
QT_TRANSLATE_NOOP("cachecoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("cachecoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("cachecoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("cachecoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("cachecoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("cachecoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("cachecoin-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Send command to -server or cachecoind"),
QT_TRANSLATE_NOOP("cachecoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("cachecoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("cachecoin-core", "Sending..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Specify configuration file (default: cachecoin.conf)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("cachecoin-core", "Specify pid file (default: cachecoind.pid)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("cachecoin-core", "This help message"),
QT_TRANSLATE_NOOP("cachecoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("cachecoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("cachecoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Unable to sign checkpoint, wrong checkpointkey?\n"),
QT_TRANSLATE_NOOP("cachecoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("cachecoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("cachecoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("cachecoin-core", "Usage:"),
QT_TRANSLATE_NOOP("cachecoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("cachecoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("cachecoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("cachecoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("cachecoin-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("cachecoin-core", "Wallet needed to be rewritten: restart Cachecoin to complete"),
QT_TRANSLATE_NOOP("cachecoin-core", "Warning: Disk space is low!"),
QT_TRANSLATE_NOOP("cachecoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("cachecoin-core", "wallet.dat corrupt, salvage failed"),
};
