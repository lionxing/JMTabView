//  Created by Jason Morrissey

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#if NS_BLOCKS_AVAILABLE
typedef void(^JMTabExecutionBlock)(void);
#endif

@interface JMTabItem : UIButton

@property (nonatomic,strong) NSString * title;
@property (nonatomic,strong) UIImage * icon;
@property (nonatomic) CGFloat fixedWidth;

- (id)initWithTitle:(NSString *)title icon:(UIImage *)icon;
-(BOOL)isSelectedTabItem;

+ (JMTabItem *)tabItemWithTitle:(NSString *)title icon:(UIImage *)icon;
+ (JMTabItem *)tabItemWithFixedWidth:(CGFloat)fixedWidth;

#if NS_BLOCKS_AVAILABLE
@property (nonatomic,copy) JMTabExecutionBlock executeBlock;
+ (JMTabItem *)tabItemWithTitle:(NSString *)title icon:(UIImage *)icon executeBlock:(JMTabExecutionBlock)executeBlock;
#endif

@end
