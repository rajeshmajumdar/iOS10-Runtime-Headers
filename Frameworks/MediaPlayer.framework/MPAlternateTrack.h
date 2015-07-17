/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTrack : NSObject {
    NSString * _canonicalLanguageIdentifier;
    NSString * _displayName;
    BOOL  _isDVS;
    BOOL  _isMainProgram;
    AVMediaSelectionOption * _option;
}

@property (nonatomic, readonly) NSString *canonicalLanguageIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) BOOL isDVS;
@property (nonatomic, readonly) BOOL isMainProgram;
@property (nonatomic, readonly) AVMediaSelectionOption *option;

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;

- (void).cxx_destruct;
- (void)_setDisplayNameFromOption:(id)arg1;
- (id)canonicalLanguageIdentifier;
- (int)compare:(id)arg1;
- (id)description;
- (id)displayName;
- (id)initWithOption:(id)arg1;
- (BOOL)isDVS;
- (BOOL)isMainProgram;
- (id)option;
- (void)setDisplayName:(id)arg1;

@end
