//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Collection view cell that hosts custom content.
 */
@interface LMCollectionViewCell : UICollectionViewCell

/**
 * Specifies that the cell's content will be arranged relative to its layout margins.
 * The default value is <code>YES</code>.
 */
@property (nonatomic) BOOL layoutMarginsRelativeArrangement;

@end

NS_ASSUME_NONNULL_END
