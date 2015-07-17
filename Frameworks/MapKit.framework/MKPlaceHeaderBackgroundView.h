/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {
    int  _backgroundType;
    <MKPlaceHeaderBackgroundViewDelegate> * _delegate;
    MKMapItem * _mapItem;
    int  _preparationState;
}

@property (nonatomic) int backgroundType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderBackgroundViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) int preparationState;
@property (readonly) Class superclass;

+ (int)backgroundTypeForMapItem:(id)arg1;
+ (id)backgroundViewForBackgroundType:(int)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (Class)classForBackgroundType:(int)arg1;

- (void).cxx_destruct;
- (int)backgroundType;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)mapItem;
- (void)pause;
- (int)preparationState;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;
- (void)setBackgroundType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPreparationState:(int)arg1;

@end
