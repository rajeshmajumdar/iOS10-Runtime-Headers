/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECLaunchInfo : NSObject <NSSecureCoding> {
    int  _itemsShownCount;
    NSDictionary * _itemsShownCounts;
    int  _launchSource;
    NSString * _query;
}

@property (nonatomic, readonly) int itemsShownCount;
@property (nonatomic, readonly) NSDictionary *itemsShownCounts;
@property (nonatomic, readonly) int launchSource;
@property (nonatomic, readonly) NSString *query;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchSource:(int)arg1 query:(id)arg2 itemsShownCount:(int)arg3 itemsShownCounts:(id)arg4;
- (int)itemsShownCount;
- (id)itemsShownCounts;
- (int)launchSource;
- (id)query;

@end
