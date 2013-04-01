#import <UIKit/UIKit.h>

@interface PXWindowView : UIView

@property(nonatomic, assign) CGRect windowBounds;
@property(nonatomic, strong, readonly) UIImageView *imageView;
@property(nonatomic, assign) CGFloat imageViewScale;

- (id)initWithImageNamed:(NSString *)imageNamed;
- (void)setImageToImageNamed:(NSString *)imageNamed;

@end
