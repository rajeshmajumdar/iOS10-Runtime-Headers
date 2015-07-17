/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLocation : NSManagedObject {
    BOOL  updatingPlace;
}

@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) CLPlacemark *placemark;
@property (nonatomic) BOOL updatingPlace;

- (id)formattedAddress;
- (void)setLocationFromURL:(id)arg1;
- (void)setUpdatingPlace:(BOOL)arg1;
- (BOOL)updatingPlace;

@end
