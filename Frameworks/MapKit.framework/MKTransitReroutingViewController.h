/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitReroutingViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    NSTimer * _cellRefreshTimer;
    NSDate * _countdownReferenceDate;
    <MKTransitReroutingViewDelegate> * _delegate;
    unsigned long long  _muid;
    GEOComposedWaypoint * _origin;
    GEORouteGenerator * _routeGenerator;
    <GEOTransitNamedItem> * _stationHallStop;
    NSArray * _suggestedRoutes;
    NSTimeZone * _timezone;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitReroutingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findTimezone;
- (void)_refresh;
- (id)delegate;
- (id)initWithRouteGenerator:(id)arg1 withMapItem:(id)arg2;
- (void)loadAlternateRoutes;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;

@end
