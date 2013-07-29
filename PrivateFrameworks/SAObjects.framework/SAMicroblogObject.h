/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, SAPersonAttribute, SALocation, NSDictionary, NSString, NSURL, NSDate, NSNumber;

@interface SAMicroblogObject : SADomainObject  {
}

@property(copy) NSURL * attachment;
@property(copy) NSString * content;
@property(copy) NSDate * dateSent;
@property(copy) NSDictionary * hashtagAlternatives;
@property(retain) SALocation * location;
@property(copy) NSNumber * outgoing;
@property(copy) NSArray * recipients;
@property(copy) NSURL * refereceId;
@property(retain) SAPersonAttribute * sender;
@property(copy) NSString * serviceType;
@property(copy) NSDictionary * socialProfileReferences;
@property(copy) NSNumber * useLocation;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (id)dateSent;
- (void)setUseLocation:(id)arg1;
- (id)useLocation;
- (void)setSocialProfileReferences:(id)arg1;
- (id)socialProfileReferences;
- (void)setRefereceId:(id)arg1;
- (id)refereceId;
- (void)setHashtagAlternatives:(id)arg1;
- (id)hashtagAlternatives;
- (void)setDateSent:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (id)outgoing;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setServiceType:(id)arg1;
- (id)serviceType;
- (id)location;
- (void)setSender:(id)arg1;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)content;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (id)groupIdentifier;
- (id)sender;

@end