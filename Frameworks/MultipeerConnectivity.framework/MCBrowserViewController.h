/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCBrowserViewController : UIViewController <MCNearbyServiceBrowserDelegate, MCSessionPrivateDelegate, UIAlertViewDelegate, UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    MCNearbyServiceBrowser * _browser;
    UIBarButtonItem * _cancelButton;
    unsigned int  _declinedPeersCount;
    <MCBrowserViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSMutableArray * _foundPeers;
    NSBundle * _frameworkBundle;
    NSMutableArray * _invitedPeersSection;
    NSMutableDictionary * _invitedPeersState;
    unsigned int  _maximumNumberOfPeers;
    unsigned int  _minimumNumberOfPeers;
    MCPeerID * _myPeerID;
    UINavigationBar * _navigationBar;
    NSMutableArray * _nearbyPeersSection;
    MCSession * _session;
    UITableView * _tableView;
}

@property (nonatomic, retain) MCNearbyServiceBrowser *browser;
@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int declinedPeersCount;
@property (nonatomic) <MCBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, retain) NSMutableArray *foundPeers;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *invitedPeersSection;
@property (nonatomic, retain) NSMutableDictionary *invitedPeersState;
@property (nonatomic) unsigned int maximumNumberOfPeers;
@property (nonatomic, readonly) BOOL maximumNumberOfPeersReached;
@property (nonatomic) unsigned int minimumNumberOfPeers;
@property (nonatomic, readonly) BOOL minimumNumberOfPeersReached;
@property (nonatomic, copy) MCPeerID *myPeerID;
@property (nonatomic, retain) UINavigationBar *navigationBar;
@property (nonatomic, retain) NSMutableArray *nearbyPeersSection;
@property (nonatomic, retain) MCSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (id)browser;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (id)cancelButton;
- (void)cancelTapped:(id)arg1;
- (void)dealloc;
- (unsigned int)declinedPeersCount;
- (id)delegate;
- (id)description;
- (id)detailStringForPeerState:(int)arg1;
- (void)didReceiveMemoryWarning;
- (id)doneButton;
- (void)doneTapped:(id)arg1;
- (id)foundPeers;
- (id)frameworkBundle;
- (id)init;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (id)invitedPeersSection;
- (id)invitedPeersState;
- (unsigned int)maximumNumberOfPeers;
- (BOOL)maximumNumberOfPeersReached;
- (unsigned int)minimumNumberOfPeers;
- (BOOL)minimumNumberOfPeersReached;
- (id)myPeerID;
- (id)navigationBar;
- (id)nearbyPeersSection;
- (id)nearbySectionTitle;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)peerJoinedSession;
- (int)positionForBar:(id)arg1;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 propagate:(BOOL*)arg4;
- (void)setBrowser:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDeclinedPeersCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setFoundPeers:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setInvitedPeersSection:(id)arg1;
- (void)setInvitedPeersState:(id)arg1;
- (void)setMaximumNumberOfPeers:(unsigned int)arg1;
- (void)setMinimumNumberOfPeers:(unsigned int)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setNearbyPeersSection:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
