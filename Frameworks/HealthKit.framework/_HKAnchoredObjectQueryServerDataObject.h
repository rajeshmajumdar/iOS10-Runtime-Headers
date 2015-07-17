/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject {
    NSNumber * _anchor;
    BOOL  _includeDeletedObjects;
    unsigned int  _limit;
    BOOL  _shouldIgnoreAnchor;
}

@property (nonatomic, retain) NSNumber *anchor;
@property (nonatomic) BOOL includeDeletedObjects;
@property (nonatomic) unsigned int limit;
@property (nonatomic) BOOL shouldIgnoreAnchor;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includeDeletedObjects;
- (id)initWithCoder:(id)arg1;
- (unsigned int)limit;
- (void)setAnchor:(id)arg1;
- (void)setIncludeDeletedObjects:(BOOL)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setShouldIgnoreAnchor:(BOOL)arg1;
- (BOOL)shouldIgnoreAnchor;

@end
