#include <string>
#include <unordered_set>

namespace options {

extern  std:: string            opt_raw_ref;
extern  std:: string            opt_gwas_filename;
extern  std:: string            opt_out;
extern  int                     opt_window_width;
extern  int                     opt_flanking_width;
extern  double                  opt_lambda;

extern  std:: string            opt_impute_range;
extern  std:: string            opt_impute_snps;
extern  std::unordered_set<std::string>    opt_impute_snps_as_a_uset;
extern  double                  opt_impute_maf/* =0.0*/; // target not imputed unless maf (in reference) is at least this.

        // The next few are like the --impute.* above, but applying to tags instead
extern  std:: string            opt_tags_range;
extern  std:: string            opt_tags_snps;
extern  std::unordered_set<std::string>    opt_tags_snps_as_a_uset;
extern  double                  opt_tags_maf/* =0.0*/;

extern  bool                    opt_reimpute_tags;

        void                    read_in_all_command_line_options(int argc, char **argv);


} // namespace options
