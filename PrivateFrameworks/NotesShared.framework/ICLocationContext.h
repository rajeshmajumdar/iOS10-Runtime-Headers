/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {
    CLGeocoder * _geocoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLGeocoder *geocoder;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedContext;

- (void).cxx_destruct;
- (id)geocoder;
- (void)setGeocoder:(id)arg1;
- (void)updatePlaceInLocation:(id)arg1 handler:(id /* block */)arg2;

@end
