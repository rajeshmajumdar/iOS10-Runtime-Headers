/* Generated by RuntimeBrowser.
 */

@protocol SYChangeSerializer <NSObject>

@required

- (<SYChange> *)changeFromData:(NSData *)arg1 ofType:(int)arg2;
- (NSData *)dataFromChange:(id <SYChange>)arg1;

@optional

- (<SYObject> *)SYObjectWithData:(NSData *)arg1;
- (NSData *)dataWithSYObject:(id <SYObject>)arg1;

@end
