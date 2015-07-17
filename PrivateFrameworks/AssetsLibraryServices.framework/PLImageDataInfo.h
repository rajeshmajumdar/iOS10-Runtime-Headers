/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLImageDataInfo : NSObject {
    int  _EXIFOrientation;
    NSURL * _URL;
    NSString * _UTI;
    BOOL  _canDownloadFromCloud;
    int  _deliveredFormat;
    BOOL  _deliveredPlaceholder;
    NSString * _sandboxExtensionToken;
}

@property int EXIFOrientation;
@property (retain) NSURL *URL;
@property (retain) NSString *UTI;
@property BOOL canDownloadFromCloud;
@property int deliveredFormat;
@property BOOL deliveredPlaceholder;
@property (retain) NSString *sandboxExtensionToken;

- (int)EXIFOrientation;
- (id)URL;
- (id)UTI;
- (BOOL)canDownloadFromCloud;
- (void)dealloc;
- (int)deliveredFormat;
- (BOOL)deliveredPlaceholder;
- (id)sandboxExtensionToken;
- (void)setCanDownloadFromCloud:(BOOL)arg1;
- (void)setDeliveredFormat:(int)arg1;
- (void)setDeliveredPlaceholder:(BOOL)arg1;
- (void)setEXIFOrientation:(int)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUTI:(id)arg1;

@end
